cd
cd c_programming_test/
cd make_build
make
cd ..
rm -rf cmake_build
mkdir cmake_build
cd cmake_build
cmake ../src
make
