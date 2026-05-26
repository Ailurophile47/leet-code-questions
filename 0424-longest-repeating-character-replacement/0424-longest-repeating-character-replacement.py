class Solution:
    def characterReplacement(self, s: str, k: int) -> int:
        freq = defaultdict(int)
        l = 0
        bestFreq = 0
        
        for r in range(len(s)):
            freq[s[r]] += 1
            bestFreq = max(bestFreq, freq[s[r]])
            if (r - l + 1) - bestFreq > k:
                freq[s[l]] -= 1
                l += 1
       
        return len(s) - l