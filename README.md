# Clang-Tidy Include Warning Demo

The code in this repository has the sole purpose of showing how clang-tidy warns about missing
includes that declare the `QStringList` and `QVector` types, since the definition of both is not
directly contained within `<QStringList>` or `<QVector>` respectively.

## How to reproduce

* Clone the repo
* Open the project in Qt Creator
* Run Analyze -> Clang-Tidy
