# How-To-Install-Docker-In-Linux-Server

1. Update Repository
  > sudo apt update
2. Install aplikasi yang dibutuhkan  
  > sudo apt install apt-transport-https ca-certificates curl software-properties-common
3. Tambahkan GPG Key untuk repository official Docker
  > curl -fsSL https://download.docker.com/linux/ubuntu/gpg | sudo apt-key add -
4. Tambahkan Docker Repository
  > sudo add-apt-repository "deb [arch=amd64] https://download.docker.com/linux/ubuntu focal stable"
5. Update database paket
  > sudo apt update
6. Jalankan perintah di bawah untuk memastikan versi docker yang terinstall 
  > apt-cache policy docker-ce
7. Finally, install Docker
  > sudo apt install docker-ce
8. Docker harusnya sudah terinstall sekarang, daemon sudah berjalan dan otomatis run pada saat boot. Cara ceknya:
  > sudo systemctl status docker
9. Menjalankan perintah docker tanpa sudo (optional)
  > sudo usermod -aG docker {USER}

// Silahkan log out dan log in again

10. Install Portainer, ini container pertama kita
Portainer adalah aplikasi UI yang ringan untuk mengatur berbagai lingkungan docker (Docker hosts or Swarm clusters)
  > docker volume create portainer_data | docker run -d -p 8000:8000 -p 9000:9000 --name=portainer --restart=always -v /var/run/docker.sock:/var/run/docker.sock -v portainer_data:/data portainer/portainer-ce

