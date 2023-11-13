#pragma once
#include<string>
#include<unordered_map>
#include<memory>

class File;
class ImageFile;
class SoundFile;
class MV1File;

class FileLoader
{
	//パスとファイルオブジェクトのテーブル
	std::unordered_map<std::wstring,std::shared_ptr<File>>loadedFile_;
public:
	std::shared_ptr<File> LoadImage(const std::wstring path);

};

