:set number
:set autoindent 
:set smarttab
:set tabstop=4
:set shiftwidth=4
:set expandtab

call plug#begin()

Plug 'https://github.com/vim-airline/vim-airline'
Plug 'https://github.com/vim-airline/vim-airline-themes'
Plug 'https://github.com/tc50cal/vim-terminal'
Plug 'https://github.com/Shadorain/shadotheme'

" Theme
Plug 'morhetz/gruvbox'
Plug 'shinchu/lightline-gruvbox.vim'
Plug 'https://github.com/rose-pine/neovim'

"typing
Plug 'jiangmiao/auto-pairs'
Plug 'alvan/vim-closetag'

"autocomplete
Plug 'sirver/utilsnips'
Plug 'neoclide/coc.nvim', {'branch': 'release'}

"prettier
Plug 'sbdchd/neoformat'
call plug#end()

colorscheme gruvbox
let g:gruvbox_contrast_dark = "hard"
