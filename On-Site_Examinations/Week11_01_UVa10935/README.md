先抓取輸入n的數字，若為0則結束讀取數字，執行一個for迴圈，將數字1~n放入queue<int> q，在執行一個for迴圈來執行題目核心操作，先將最上方的數pop()出來並放入vector<int> discarded陣列裡，再將第二上面的數pop()出來加到最後端，直到n-1次。最後在使用for迴圈讀取與印出discarded陣列裡的數字與queue<int> q裡最後剩餘的數。
