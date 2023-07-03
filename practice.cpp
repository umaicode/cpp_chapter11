// data[i]를 찾아야 하는데 i는 top을 이용. = > data[top]



class TextRecord {
	TextRecord(int maxKeys = 99, int unique = 1);
	~TextRecord() {};
	int Insert(const char* key, T& record);
	int Remove(const char* key);
	int Search(const char* key); const
		void Print(ostream&) const;
protected:
	int MaxKeys;
	int NumKeys;
	char** Keys;
	T* records;

};
class RecordTable {
public:
	int Read(T& record);
	int Read(char* key, T& record);
	int Append(const T& record);
	int Update(char* oldKey, const T& record);
	RecordTable(int keySize, int maxKeys = 100);
	~RecordTable();
};