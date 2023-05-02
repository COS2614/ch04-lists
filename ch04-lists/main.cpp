#include <QCoreApplication>
#include <QDebug>
#include <QList>
#include <QStringList>

// Class that has a data member which is an instance of QList
class MyClass
{
public:
    MyClass()
    {
        myList << 1 << 2 << 3 << 4 << 5;
    }

    QList<int> getList()
    {
        return myList;
    }

private:
    QList<int> myList;
};


// Class that inherits from QList
class MyList : public QList<int>
{
public:
    MyList()
    {
        append(1);
        append(2);
        append(3);
        append(4);
        append(5);
    }
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    // QList
    QList<int> integerList;
    integerList << 1 << 2 << 3 << 4 << 5;

    qDebug() << "QList of integers: ";
    for (const auto &number : integerList)
    {
        qDebug() << number;
    }

    // QStringList
    QStringList stringList;
    stringList << "apple" << "banana" << "cherry" << "date" << "elderberry";

    qDebug() << "QStringList: ";
    for (const auto &string : stringList)
    {
        qDebug() << string;
    }

    // foreach loop
    qDebug() << "QStringList using foreach loop:";
    foreach (const QString &str, stringList)
    {
        qDebug() << str;
    }

    // Q_FOREACH macro
    qDebug() << "QStringList using Q_FOREACH macro:";
    Q_FOREACH (const QString &str, stringList)
    {
        qDebug() << str;
    }

    // iterators
    qDebug() << "QList of integers using iterators";
    for (QList<int>::iterator it = integerList.begin(); it != integerList.end(); ++it)
    {
        qDebug() << *it;
    }

    // Java 1.2 style iterator
    qDebug() << "QStringList using Java 1.2 style iterator:";
    QListIterator<QString> it (stringList);
    while (it.hasNext())
    {
        QString current = it.next();
        qDebug() << current;
    }

    // Use class with QList data member
    MyClass myClass;

    qDebug() << "Class with QList data member:";
    foreach (const auto &number, myClass.getList())
    {
        qDebug() << number;
    }

    // Use class that inherits from QList
    MyList myList;

    qDebug() << "Class that inherits from QList";
    foreach (const auto &number, myList)
    {
        qDebug() << number;
    }


    QCoreApplication::exit();
}
