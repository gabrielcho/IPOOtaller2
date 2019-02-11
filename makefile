all:
	cd Test; \
	g++ -std=c++11 ../HallDeLaFama.cpp Test_HallDeLaFama.cpp -o Test_HallDeLaFama; \
	./Test_HallDeLaFama; \