#ifndef TABTENN1_H_
#define TABTENN1_H_

#include <string>

using std::string;

class TableTennisPlayer {
private:
    string firstname;
    string lastname;
    bool hasTable;

public:
    TableTennisPlayer(const string& = "none",
                      const string& = "none", bool = false);
    void Name() const;
    bool HasTable() const {
        return hasTable;
    }
    void RestTable(bool v) {
        hasTable = v;
    }
};

class RatedPlayer : public TableTennisPlayer {
private:
    unsigned int rating;

public:
    RatedPlayer(unsigned int = 0,
        const string& = "none", const string& = "none", bool = false);
    RatedPlayer(unsigned int, const TableTennisPlayer&);
    unsigned int Rating() const {return rating;}
    void RestTable(unsigned int r) {rating = r;};
};

#endif
