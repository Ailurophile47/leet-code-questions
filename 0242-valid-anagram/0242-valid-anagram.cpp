const auto _ = std::cin.tie(nullptr)->sync_with_stdio(false);
class Solution {
public:
    bool isAnagram(const std::string& s, const std::string& t) {
        if (s.size() != t.size()) return false;
        uint16_t cnt[26]={};
        uint16_t i=0;
        for (; i<s.size(); ++i) {
            ++cnt[unsigned(s[i]-'a')];
            --cnt[unsigned(t[i]-'a')];
        }
        for (i=0; i<26; ++i)
            if (cnt[i]!=0) return false;
        return true;
    }
};