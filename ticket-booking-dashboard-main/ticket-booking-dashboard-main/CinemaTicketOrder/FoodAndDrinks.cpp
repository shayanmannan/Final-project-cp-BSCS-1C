#include "FoodAndDrinks.h"
#include "ui_FoodAndDrinks.h"
#include "Finish.h"

FoodAndDrinks::FoodAndDrinks(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::FoodAndDrinks)
{
    ui->setupUi(this);
    mydb = QSqlDatabase::addDatabase("QSQLITE");
    QString db_path = QDir::currentPath();
    db_path =  db_path + QString("/database.db");
    mydb.setDatabaseName(db_path);
    connectAllButtonToSlot();
}
FoodAndDrinks::~FoodAndDrinks()
{
    delete ui;
}
void FoodAndDrinks::on_pushButton_clicked()
{

}
void FoodAndDrinks::chooseItem(int index)
{
    QString itemName = indexToName(index);
    double itemPrice = indexToPrice(index);
    Item item(itemName,itemPrice);
    Cart::getInstance().setFoodCost(Cart::getInstance().getFoodCost() + itemPrice);
    ui->label_foodCost->setText(QString::number(Cart::getInstance().getFoodCost()));
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1,0,new QTableWidgetItem(itemName));
    ui->tableWidget->setItem(ui->tableWidget->rowCount() - 1,1,new QTableWidgetItem(QString::number(itemPrice)));
}
void FoodAndDrinks::clearAll(){
    Cart::getInstance().setFoodCost(0.00);
    ui->label_foodCost->setText(QString::number(Cart::getInstance().getFoodCost()));
    while (ui->tableWidget->rowCount() > 0){
        ui->tableWidget->removeRow(0);
    }
}
void FoodAndDrinks::checkOut()
{
    QString movieName;
    int updateTicket = Cart::getInstance().getTicketSoldInDataBase() + Cart::getInstance().getTicketSold();
    double updateFood = Cart::getInstance().getFoodSoldInDataBase() + Cart::getInstance().getFoodCost();
    int movieIDInDatabase = Cart::getInstance().getMovieIDInDatabase();
    QString updateSeatQuery;
    switch (Cart::getInstance().getTimeSlot()) {
        case 0:
            updateSeatQuery = "theaterA=";
            break;
        case 1:
            updateSeatQuery = "theaterB=";
            break;
        case 2:
            updateSeatQuery = "theaterC=";
            break;
        case 3:
            updateSeatQuery = "theaterD=";
            break;
        case 4:
            updateSeatQuery = "theaterE=";
            break;
    }
    mydb.open();
    QSqlQuery *query = new QSqlQuery(mydb);
        query->prepare("UPDATE movies SET ticketSold=?, foodSold='" + QString::number(updateFood) + "'"
                        ", " + updateSeatQuery + "=?                    WHERE movieId='" + QString::number(movieIDInDatabase) + "' ");
        query->addBindValue(updateTicket);
        query->addBindValue(toByteArray(Cart::getInstance().vectorSeats));
        qDebug() << "Ticket sold in db = " << Cart::getInstance().getTicketSoldInDataBase();
        qDebug() << "Ticket sold in this session = " << Cart::getInstance().getTicketSold();
        qDebug() << "Food sold in db = " << Cart::getInstance().getFoodSoldInDataBase();
        qDebug() << "Food sold in this session = " << Cart::getInstance().getFoodCost();
        if(!query->exec())
        {
            QMessageBox::critical(this,"Error","Couldn't insert data");
            qDebug() << query->lastError();
        }
    mydb.close();
    Finish *finish = new Finish();
    hide();
    finish->show();
}
QByteArray FoodAndDrinks::toByteArray(const QVector<bool> &data){
      QByteArray result;
      QDataStream bWrite( &result, QIODevice::WriteOnly );
      bWrite << data;
      return result;
}
QString FoodAndDrinks::indexToName(int index){
    switch (index) {
        case 0:
            return "Small Popcorn";
        case 1:
            return "Large Popcorn";
        case 2:
            return "Coca  Cola";
        case 3:
            return "Fanta";
        case 4:
            return "Sprite";
        case 5:
            return "Water";
        case 6:
            return "Nachos with cheese";
        case 7:
            return "Fries";
        case 8:
            return "Blueberry";
        case 9:
            return "Lime";
        case 10:
            return "Cherry";
        case 11:
            return "Family Deal (5 small popcorn, 5 Coca Cola)";
        case 12:
            return "Nachos & Slushie pack";
        case 13:
            return "Slushie & Fries Pack";
        case 14:
            return "Nachos & Fries Pack";
    }
}
double FoodAndDrinks::indexToPrice(int index){
    switch (index) {
        case 0:
            return 300;
        case 1:
            return 500;
        case 2:
            return 70;
        case 3:
            return 70;
        case 4:
            return 70;
        case 5:
            return 50;
        case 6:
            return 800;
        case 7:
            return 600;
        case 8:
            return 400;
        case 9:
            return 400;
        case 10:
            return 400;
        case 11:
            return 1500;
        case 12:
            return 1000;
        case 13:
            return 800;
        case 14:
            return 1200;
        default:
            return 0;
    }
}
void FoodAndDrinks::connectAllButtonToSlot()
{
    QPushButton *button = ui->pushButton_ItsNotSmallitsAverage;
    ui->pushButton_ItsNotSmallitsAverage->setProperty("myId",0);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_probablyhasabadpersonality;
    ui->pushButton_probablyhasabadpersonality->setProperty("myId",1);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_cocacola;
    ui->pushButton_cocacola->setProperty("myId",2);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_fanta;
    ui->pushButton_fanta->setProperty("myId",3);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_sprite;
    ui->pushButton_sprite->setProperty("myId",4);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_water;
    ui->pushButton_water->setProperty("myId",5);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_nachocheese;
    ui->pushButton_nachocheese->setProperty("myId",6);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_fries;
    ui->pushButton_fries->setProperty("myId",7);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_blueberry;
    ui->pushButton_blueberry->setProperty("myId",8);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_lime;
    ui->pushButton_lime->setProperty("myId",9);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_cherry;
    ui->pushButton_cherry->setProperty("myId",10);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_YouAreAnAngelFromHeaven;
    ui->pushButton_YouAreAnAngelFromHeaven->setProperty("myId",11);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_nachoslushie;
    ui->pushButton_nachoslushie->setProperty("myId",12);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_slushiefries;
    ui->pushButton_slushiefries->setProperty("myId",13);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
    button = ui->pushButton_nachofries;
    ui->pushButton_nachofries->setProperty("myId",14);
    connect(button, &QPushButton::clicked, [this, button](){
        chooseItem(button->property("myId").toInt());
    });
}

void FoodAndDrinks::on_pushButton_clearAll_clicked()
{
    clearAll();
}
void FoodAndDrinks::on_pushButton_checkOut_clicked()
{
    checkOut();
}
