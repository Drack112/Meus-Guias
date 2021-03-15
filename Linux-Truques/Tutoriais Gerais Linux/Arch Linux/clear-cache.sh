#Um arquivo para limpar o cache do sistema e liberar espaço de armazenamento.
#É importante ter o pacote pacman-contrib para usar esse script, se você não tiver ele instale através do comando 
#"sudo pacman -S pacman-contrib"

sudo pacman -Sc
sudo pacman -Scc
paccache -r
sudo pacman -Qtdq
sudo pacman -Rns $(pacman -Qtdq)
sudo du -sh ~/.cache/
rm -rf ~/.cache/*
