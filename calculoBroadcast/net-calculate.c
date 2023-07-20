#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char ip_address[] = "192.168.1.1";
    char subnet_mask[] = "255.255.255.240";
    int mask_bits = 0;
    int subnets = 0;
    int i = 0;
    char *octeto;
    octeto = strtok(subnet_mask,".");
  for (i = 0; i < 4; i++) {
    printf("\n %d octeto -> [%s]",i+1, octeto);
        if (atoi(octeto) == 255) {
            mask_bits++;
        } else {
            break;
        }
    octeto = strtok(NULL,".");
    }
    printf("\n mask_bits = %d",mask_bits);
    subnets = 1 << (32 - mask_bits);
    printf("\nNumber of subnets: %d\n", subnets);
return 0;
    for (i = 0; i < subnets; i++) {
        printf("\nSubnet %d: %d.%d.%d.%d\n", i, ip_address[0], ip_address[1], ip_address[2], i);
    }

    return 0;
}

