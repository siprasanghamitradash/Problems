class Solution(object):
    def totalNumbers(self, digits):
        """
        :type digits: List[int]
        :rtype: int
        """
        s = list(map(str,digits))
        lis = []
        for i in s:
            if i != '0':
                a = s[:]
                a.remove(i)
                for b in a:
                    c = a[:]
                    c.remove(b)
                    for d in c:
                        n = i+b+d
                        lis.append(int(n))
        lis = list(set(lis))
        lis = list(filter(lambda x: x%2==0,lis))

        return len(lis)
