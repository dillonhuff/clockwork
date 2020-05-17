wget https://shoup.net/ntl/ntl-11.4.1.tar.gz
tar -xvzf ntl-11.4.1.tar.gz
cd ntl-11.4.1/src
./configure NTL_GMP_LIP=on PREFIX=/home/dhuff/clockwork/ GMP_PREFIX=/usr/lib/x86_64-linux-gnu/
make
make install
cd ../../

  #- curl -OL barvinok.gforge.inria.fr/barvinok-0.41.tar.gz
  #- tar -xvzf barvinok-0.41.tar.gz
  #- cd barvinok-0.41/
  #- cd ..


./configure --prefix=/home/dhuff/clockwork --with-gmp-prefix=/usr/lib/x86_64-linux-gnu/ --with-ntl-prefix=/home/dhuff/clockwork
