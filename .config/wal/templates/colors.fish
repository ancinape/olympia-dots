set fish_color_normal normal
set fish_color_command {color1.strip}
set fish_color_param {color5.strip}
set fish_color_redirection $fish_color_param
set fish_color_comment {color8.strip}
set fish_color_error ff0000
set fish_color_escape {color5.strip}
set fish_color_operator $fish_color_escape
set fish_color_end {color2.strip}
set fish_color_quote {color2.strip}
set -Ux fish_color_autosuggestion 555 brblack
set -Ux fish_color_user brgreen
set -Ux fish_color_host $fish_color_normal
set -Ux fish_color_valid_path --underline
set -Ux fish_color_cwd green
set -Ux fish_color_cwd_root red
set -Ux fish_color_match --background=brblue
set -Ux fish_color_search_match bryellow --background=brblack
set -Ux fish_color_selection white --bold --background=brblack
set -Ux fish_color_cancel -r
set -Ux fish_pager_color_prefix white --bold --underline
set -Ux fish_pager_color_completion
set -Ux fish_pager_color_description $fish_color_quote yellow
set -Ux fish_pager_color_progress brwhite --background=cyan
set -Ux fish_color_history_current --bold
