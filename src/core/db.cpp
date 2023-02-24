#include "db.hpp"

DB::DB()
{
}

void DB::put(int key, int value)
{
    data[key] = value;
}

int DB::get(int key)
{
    return data[key];
}
