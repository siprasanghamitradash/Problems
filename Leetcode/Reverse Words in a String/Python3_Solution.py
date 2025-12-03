class Solution:
    def reverseWords(self, s: str) -> str:
        l = s.split(' ')
        l = l[::-1]
        li = []
        for i in l:
            if i.isspace() != True and i != '':
                li.append(i.strip())
        print(li)
        res = ' '.join(li)
        return res.strip()
