#include <stdio.h>
#include <string.h>
#include <dirent.h>
#include <unistd.h>
#include <sys/stat.h>

int checkIsDirectory(const char *file)
{
    struct stat st;
    stat(file, &st);
    return S_ISDIR(st.st_mode);
}

void renameFilesInDirectory(const char *path)
{
    char path2[2000];
    DIR *dir = opendir(path);
    struct dirent *p;
    int count=1;
    while((p = readdir(dir)) != NULL ){
        sprintf(path2, "%s%s%s", path, "/", p->d_name);
        if(!checkIsDirectory(path2))
        {
            char path3[2000];
            sprintf(path3, "%s%s%d", path, "/", count);
            count++;
            rename(path2, path3);
        }
    }
    closedir(dir);
}
