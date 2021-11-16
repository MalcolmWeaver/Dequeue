CC=g++

malcolm: MalcolmDequeTest
	$(CC) MalcolmDequeTest.cpp -g -o runMalcolm

official: deque_test.cpp
	$(CC) deque_test.cpp -g -o runOfficial
