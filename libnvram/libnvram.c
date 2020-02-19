char* acosNvramConfig_get(const char* key) {
    return "";
}

int acosNvramConfig_match(const char* key, const char* value) {
    return 1;
};

void acosNvramConfig_set(const char* key, const char* value) {

};

void acosNvramConfig_setPAParam(const int value) {

};

int nvram_commit() {
    return 0;
};

char* nvram_get(const char* name) {
    return "";
};

int nvram_getall(char* buf, int len) {
    return 0;
};

int nvram_set(const char* name, const char* value) {
    return 0;
};

int nvram_unset(const char* name) {
    return 0;
};
