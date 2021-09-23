/**************************************************
 * Created by Bunyamin TAMAR
 * bunyamintamar@yandex.com
 * https://www.linkedin.com/in/bunyamintamar/
 * September 2021
 *************************************************/

#include <QtTest>


class test : public QObject
{
    Q_OBJECT

public:
    test();
    ~test();

    /* USER CODE BEGIN 1 */


    /* USER CODE END 1 */

private slots:
    void run();

};

test::test()
{

}

test::~test()
{

}

/* USER CODE BEGIN 2 */


/* USER CODE END 2 */

void test::run()
{
    /***********************************************
     *  Add your methods here like below
     *
     *  QVERIFY(your method == requested result);
     *  or QVERIFY(your method <  requested result);
     *  or QVERIFY(your method >= requested result);
     **********************************************/

    /* USER CODE BEGIN 3 */


    /* USER CODE END 3 */
}

QTEST_APPLESS_MAIN(test)

#include "test.moc"
