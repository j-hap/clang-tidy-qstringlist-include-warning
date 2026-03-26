#include <QCoreApplication>
#include <QString>
#include <QVector>

int main(int argc, char* argv[]) {
  QCoreApplication a(argc, argv);
  QStringList s;
  QVector<QString> v;
  return QCoreApplication::exec();
}
