# generated by configure / remove this line to disable regeneration
prefix="/home/users/isabdr/clockwork"
exec_prefix="${prefix}"
bindir="${exec_prefix}/bin"
libdir="/home/users/isabdr/clockwork/barvinok-0.41/isl/.libs"
datarootdir="${prefix}/share"
datadir="${datarootdir}"
sysconfdir="${prefix}/etc"
includedir="/home/users/isabdr/clockwork/barvinok-0.41/isl/./include"
package="isl"
suffix=""

for option; do case "$option" in --list-all|--name) echo  "isl"
;; --help) pkg-config --help ; echo Buildscript Of "isl Library"
;; --modversion|--version) echo "0.19"
;; --requires) echo : ""
;; --libs) echo -L${libdir} "" "-lisl -lgmp"
       :
;; --cflags) echo -I${includedir} ""
       :
;; --variable=*) eval echo '$'`echo $option | sed -e 's/.*=//'`
;; --uninstalled) exit 0 
;; *) ;; esac done
