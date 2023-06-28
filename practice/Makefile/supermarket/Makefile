cc=gcc
sudo:super
	echo "echo build"
super:main.o stock.o sales.o purchase.o
	$(cc)  main.o stock.o sales.o purchase.o -o supermarket;
main.o:main.c
	$(cc) -c main.c
sales.o:sales.c
	$(cc) -c sales.c
stock.o:stock.c
	$(cc) -c stock.c
purchase.o:purchase.c
	$(cc) -c purchase.c
clean:
	rm *r main.o purchase.o stock.o sales.o
install:
	sudo cp supermarket /bin/
uninstall:
	sudo rm /bin/supermarket
