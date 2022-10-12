# Start Sway at login
if status is-login
	if test -z "$DISPLAY"; and test (tty) = /dev/tty1
		exec sway
	end
end

# Color the terminal
if status is-interactive
	cat ~/.cache/wal/sequences &
	ufetch
end
if test -e ~/.cache/wal/colors.fish
	source ~/.cache/wal/colors.fish
end
