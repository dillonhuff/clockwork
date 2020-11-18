if [ ${COREIR} -eq 1 ]; then
    echo "Build CGRA lib"
    make -j4 coreirlib
fi
make -j4 || { echo 'Make failed'; exit 1; }


