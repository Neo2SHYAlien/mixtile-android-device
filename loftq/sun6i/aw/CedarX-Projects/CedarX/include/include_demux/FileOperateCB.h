#ifndef FILE_OPERATE_CB_H_
#define FILE_OPERATE_CB_H_

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

struct OpenDir
{
    int32_t nDirId;//����ֵ
    char *pDirPath;
};
struct ReadDir
{
    int32_t ret;
    int32_t nDirId;
    int32_t nFileNameSize;
    char *pFileName;
};
struct CloseDir
{
    int32_t ret;
    int32_t nDirId;
};
struct OpenFile
{
    int32_t nFileFd;//����ֵ
    char *pFilePath;
};
struct CheckAccess
{
    int32_t isAccessable;//����ֵ
    char *pFilePath;
    int32_t mode;
};

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif

