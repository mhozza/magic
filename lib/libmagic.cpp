#include <vector>
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

#define LL long long

template <class T>
class Range {
    T start;
    T end;
    T jump;
public:
    T get(LL i) {
        return start + i * jump;
    }

    bool last(LL i) {
        return i >= end;
    }

    LL size() {
        return ((LL)((end - start)/jump));
    }

    Range(T s, T e, T j) {
        start = s;
        end = e;
        jump = j;
    }
};

template <class T>
LL print(T v) {
    cout << v << endl;
    return 0;
}

template <class T>
T read() {
    T v;
    cin >> v;
    return v;
}

template <class T>
vector<T>* createList(LL size) {
    vector<T>* v = new vector<T>(size);
    // cout << "List:" << v << endl;
    return v;
}

template <class T>
vector<T>* createListFromRange(Range<T>* range) {
    vector<T>* v = new vector<T>(range->size());
    for (int i  = 0; i < range->size(); i++) {
        (*v)[i] = range->get(i);
    }
    return v;
}

template <class T>
T getListItem(vector<T> *list, LL index) {
    T item = (*list)[index];
    // cout << "Get:" << item << endl;
    return item;
}

template <class T>
void setListItem(vector<T> *list, LL index, T item) {
    (*list)[index] = item;
    //cout << "Set:" << item << endl;
}

// template <class T>
// void deleteList(vector<T> *list) {
//     delete list;
// }

template <class T>
vector<T> * mergeLists(vector<T> *list1, vector<T> *list2) {
    vector<T> *v = createList<T>(0);
    v->insert(v->end(), list1->begin(), list1->end());
    v->insert(v->end(), list2->begin(), list2->end());
    return v;
}

template <class T>
vector<T> * multiplyList(vector<T> *list1, LL val) {
    vector<T> *v = createList<T>(0);
    for (LL i = 0; i < val; i++) {
        v->insert(v->end(), list1->begin(), list1->end());
    }
    return v;
}

#ifdef __cplusplus
extern "C"
{
#endif

LL printInt(LL a) {
    return print(a);
}

LL readInt() {
    return read<LL>();
}

long long iexp(long long a, long long b) {
    long long ret = 1;
    for (long long i = 0; i < b; i++) {
        ret *= a;
    }
    return ret;
}

//--Int------------------
void* createListInt(LL size) {
    return (void*) createList<LL>(size);
}

void* createListFromRangeInt(void* range) {
    return (void*) createListFromRange<LL>((Range<LL>*) range);
}

void* createRangeInt(LL start, LL end, LL jump) {
    return (void*) new Range<LL>(start, end, jump);
}

void setListItemInt(void* list, LL index, LL item) {
    setListItem<LL>((vector<LL>*) list, index, item);
}

LL getListItemInt(void* list, LL index) {
    getListItem<LL>((vector<LL>*) list, index);
}

LL getRangeItemInt(void* range, LL index) {
    return ((Range<LL>*) range)->get(index);
}

void* mergeListsInt(void *list1, void *list2) {
    return (void*) mergeLists<LL>((vector<LL> *)list1, (vector<LL> *)list2);
}

void* multiplyListInt(void *list1, LL val) {
    return (void*) multiplyList<LL>((vector<LL> *)list1, val);
}

LL sizeListInt(void* list1) {
    return ((vector<LL> *)list1)->size();
}

LL sizeRangeInt(void* range1) {
    return ((Range<LL> *)range1)->size();
}

//--Float------------------

LL printFloat(double a) {
    return print(a);
}

void* createListFloat(LL size) {
    return (void*) createList<double>(size);
}

void* createListFromRangeFloat(void* range) {
    return (void*) createListFromRange<double>((Range<double>*) range);
}

void setListItemFloat(void* list, LL index, double item) {
    setListItem<double>((vector<double>*) list, index, item);
}

double getListItemFloat(void* list, LL index) {
    getListItem<double>((vector<double>*) list, index);
}

void* mergeListsFloat(void *list1, void *list2) {
       return (void*) mergeLists<double>((vector<double> *)list1, (vector<double> *)list2);
}

void* multiplyListFloat(void *list1, LL val) {
    return (void*) multiplyList<double>((vector<double> *)list1, val);
}

LL sizeListFloat(void* list1) {
    return ((vector<double> *)list1)->size();
}

//--Bool------------------

LL printBool(bool a) {
    return print(a);
}

void* createListBool(LL size) {
    return (void*) createList<bool>(size);
}

void* createListFromRangeBool(void* range) {
    return (void*) createListFromRange<bool>((Range<bool>*) range);
}

void setListItemBool(void* list, LL index, bool item) {
    setListItem<bool>((vector<bool>*) list, index, item);
}

bool getListItemBool(void* list, LL index) {
    getListItem<bool>((vector<bool>*) list, index);
}

void* mergeListsBool(void *list1, void *list2) {
       return (void*) mergeLists<bool>((vector<bool> *)list1, (vector<bool> *)list2);
}

void* multiplyListBool(void *list1, LL val) {
    return (void*) multiplyList<bool>((vector<bool> *)list1, val);
}

LL sizeListBool(void* list1) {
    return ((vector<bool> *)list1)->size();
}

//--Char------------------

LL printChar(char a) {
    return print(a);
}

LL printString(vector<char>* list) {
    for (int i = 0; i<list->size(); i++) {
        cout << (*list)[i];
    }
    cout << endl;
}

void* createListChar(LL size) {
    return (void*) createList<char>(size);
}

void* createListFromRangeChar(void* range) {
    return (void*) createListFromRange<char>((Range<char>*) range);
}

void setListItemChar(void* list, LL index, char item) {
    setListItem<char>((vector<char>*) list, index, item);
}

char getListItemChar(void* list, LL index) {
    getListItem<char>((vector<char>*) list, index);
}

void* mergeListsChar(void *list1, void *list2) {
       return (void*) mergeLists<char>((vector<char> *)list1, (vector<char> *)list2);
}

void* multiplyListChar(void *list1, LL val) {
    return (void*) multiplyList<char>((vector<char> *)list1, val);
}

LL sizeListChar(void* list1) {
    return ((vector<char> *)list1)->size();
}


//--List----------------------

void* createListPointer(LL size) {
    return (void*) createList<void*>(size);
}

void setListItemPointer(void* list, LL index, void* item) {
    setListItem<void*>((vector<void*>*) list, index, item);
}

void* getListItemPointer(void* list, LL index) {
    getListItem<void*>((vector<void*>*) list, index);
}

void* mergeListsPointer(void *list1, void *list2) {
       return (void*) mergeLists<void*>((vector<void*> *)list1, (vector<void*> *)list2);
}

void* multiplyListPointer(void *list1, LL val) {
    return (void*) multiplyList<void*>((vector<void*> *)list1, val);
}

LL sizeListPointer(void* list1) {
    return ((vector<void*> *)list1)->size();
}

#ifdef __cplusplus
}
#endif
