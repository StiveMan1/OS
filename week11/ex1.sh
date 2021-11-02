fallocate -l 1024M loft.img
losetup -f lofs.img
sudo mkfs.ext4 lofs.img
mkdir lofsdisk
sudo mount lofs.img ./lofsdisk
