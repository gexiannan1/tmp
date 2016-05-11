set nocompatible
set backspace=indent,eol,start
set nobackup
set history=500
set ruler
set showcmd

set t_Co=256
color molokai
"highlight Search term=reverse ctermbg=4 ctermfg=7
"hi Identifier ctermfg=blue cterm=none

set showmatch
set hlsearch
set incsearch
set ignorecase

syntax on
filetype plugin indent on
autocmd FileType text setlocal

set autoindent
set cindent
set number
set expandtab
set tabstop=2
set shiftwidth=2
"set nowrap

set listchars=tab:>\ ,trail:-
set list

set encoding=utf-8
set fileencoding=utf-8
set fileencodings=utf-8,gb2312
"set path+=~/include
"set path+=/home/egmkang/code/green_turtle/green_turtle

let g:ycm_min_num_of_chars_for_completion = 1
let g:ycm_filetype_whitelist = { '*': 1 }
let g:ycm_register_as_syntastic_checker = 1
let g:ycm_allow_changing_updatetime = 1
let g:ycm_complete_in_comments = 1
let g:ycm_collect_identifiers_from_comments_and_strings = 1
let g:ycm_seed_identifiers_with_syntax = 1
let g:ycm_autoclose_preview_window_after_completion = 1
"let g:ycm_global_ycm_extra_conf = '/home/egmkang/.ycm_extra_conf.py'
let g:ycm_add_preview_to_completeopt = 1
let g:ycm_confirm_extra_conf = 0

nmap <C-]> :YcmCompleter GoToDefinitionElseDeclaration<cr>
imap <C-]> <esc>:YcmCompleter GoToDefinitionElseDeclaration<cr>

autocmd QuickFixCmdPost [^l]* nested cwindow
autocmd QuickFixCmdPost    l* nested lwindow

au BufReadPost * if line("'\"") > 0|if line("'\"") <= line("$")|exe("norm '\"")|else|exe "norm $"|endif|endif

let g:clang_format_fallback_style='~/.clang-format'
map = :pyf /home/egmkang/bin/clang-format.py<CR>


let g:clighter_libclang_file = '/usr/lib/libclang.so'
let g:clighter_autostart = 1
let g:clighter_realtime = 1
let g:clighter_occurrences_mode = 1
let g:clighter_clang_options = ['-std=c++11', '-I/home/egmkang/code/green_turtle/green_turtle', '-I/home/egmkang/code/green_turtle/deps/gtest-1.7.0/include', "-I/home/egmkang/code/green_turtle/deps/pugixml"]
let g:clighter_compile_args = ['-std=c++11', '-I/home/egmkang/code/green_turtle/green_turtle', '-I/home/egmkang/code/green_turtle/deps/gtest-1.7.0/include', '-I/home/egmkang/code/green_turtle/deps/pugixml', '-I/home/egmkang/server/deps/sdk']
hi TypeRef term=NONE cterm=NONE ctermbg=232 ctermfg=255 gui=NONE
hi ClassDecl term=NONE cterm=NONE ctermbg=255 ctermfg=232 gui=NONE
set updatetime=200

map <C-n> :NERDTreeToggle<CR>
autocmd StdinReadPre * let s:std_in=1
autocmd VimEnter * if argc() == 0 && !exists("s:std_in") | NERDTree | endif
autocmd bufenter * if (winnr("$") == 1 && exists("b:NERDTreeType") && b:NERDTreeType == "primary") | q | endif
