class Journal {
    string          m_title;
    vector<string>  m_entries;

public:
    explicit Journal(const string &title) : m_title{title} {} 
    void add_entries(const string &entry) {
        static uint32_t count = 1;
        m_entries.push_back(to_string(count++) + ": " + entry);
    } 
    auto get_entries() const { return m_entries; }

    //void save(const string &filename)
    //{
    //    ofstream ofs(filename); 
    //    for (auto &s : m_entries) ofs << s << endl;
    //}
};

struct SavingManager {
    static void save(const Journal &j, const string &filename) {
        ofstream ofs(filename);
        for (auto &s : j.get_entries())
            ofs << s << endl;
    }
};

SavingManager::save(journal, "diary.txt");
