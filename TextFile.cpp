#include "TextFile.h"

bool TextFile :: isFileEmpty() {
    bool verdict = true;
    fstream textFile;
    textFile.open(getFileName().c_str(), ios::app);

    if (textFile.good() == true) {
        textFile.seekg(0, ios::end);
        if (textFile.tellg() != 0)
            verdict = false;
    }

    textFile.close();
    return verdict;
}

string TextFile :: getFileName() {

    return FILE_NAME;
}
