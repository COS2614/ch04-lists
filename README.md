# ch04-lists

The program starts by defining a class named MyClass that has a data member that is an instance of QList. The constructor of this class initializes the list with some values.

Next, a class named MyList is defined, which inherits from QList. The constructor of this class appends some values to the list.

The main function creates an instance of QList and initializes it with some values. Then it uses a for-each loop to iterate over the list and prints each element.

The program also creates an instance of QStringList and initializes it with some strings. It then iterates over the list and prints each string using a for-each loop, as well as a Q_FOREACH macro.

The program demonstrates the use of iterators to iterate over the QList of integers. It uses a Java 1.2 style iterator to iterate over the QStringList.

The program also shows how to use the MyClass class with a QList data member and iterate over its elements using a for-each loop. It also uses the MyList class that inherits from QList and iterates over its elements using a for-each loop.

Finally, the program exits using QCoreApplication::exit().

Overall, this program provides a good starting point for learning about QList and QStringList classes and their usage in C++ Qt programs.
