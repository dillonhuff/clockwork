echo dse_compute/$1_mapped_$2.json

cp ../../MetaMapper/outputs/$1_compute_mapped.json ./dse_compute/$1_mapped_$2.json
cp ../../MetaMapper/outputs/$1_compute_kernel_latencies.json ./dse_kernel_latencies/

sed -i -e 's/_mapped//g' dse_compute/$1_mapped_$2.json

if [ 'camera_pipeline' = $1 ]; then
    echo YES
    sed -i -n '/"mantle":{/q;p' dse_compute/$1_mapped_$2.json

    sed -i '$d' dse_compute/$1_mapped_$2.json

    echo "}}}" >> dse_compute/$1_mapped_$2.json
fi

./dse_flow.sh $1 dse_compute/$1_mapped_$2.json
