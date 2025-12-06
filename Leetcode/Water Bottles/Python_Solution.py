class Solution(object):
    def numWaterBottles(self, numBottles, numExchange):
        result = numBottles 
        remaining = numBottles
    	#n exchange bottle = 1 bottle
        while numExchange <= remaining:
            new_bottles = remaining//numExchange
            remaining = remaining%numExchange +new_bottles
            result += new_bottles
            print(remaining,result)
        return result
