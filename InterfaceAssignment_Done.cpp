//Deligation 
//Impelementing the interface not extending (Not a Inharitance)

#include <iostream>
#include <string>

using namespace std;

class IPrinter {
public:
    virtual void print(string path) = 0;
};

class IScanner {
public:
    virtual void scan(string path) = 0;
};

class Printer : public IPrinter {
public:
    void print(string path) override {
        cout << "Printing ....." << path << endl;
    }
};

class Scanner : public IScanner {
public:
    void scan(string path) override {
        cout << "Scanning ....." << path << endl;
    }
};

class PrintScanner : public IPrinter, public IScanner {
public:
    void print(string path) override {
        cout << "Printing ....." << path << endl;
    }

    void scan(string path) override {
        cout << "Scanning ....." << path << endl;
    }
};

class TaskManager {
public:
    static void executePrintTask(IPrinter *printer, string documentPath) {
        printer->print(documentPath);
    }

    static void executeScanTask(IScanner *scanner, string documentPath) {
        scanner->scan(documentPath);
    }
};

int main() {
    Printer printerObj;
    Scanner scannerObj;
    PrintScanner printScannerObj;

    TaskManager::executePrintTask(&printerObj, "Test.doc");
    TaskManager::executeScanTask(&scannerObj, "MyImage.png");
    TaskManager::executePrintTask(&printScannerObj, "NewDoc.doc");
    TaskManager::executeScanTask(&printScannerObj, "YourImage.png");

    return 0;
}
