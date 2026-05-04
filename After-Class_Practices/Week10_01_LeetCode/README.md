一開始的寫法是只要呼叫pop()跟peek()的時候，就會從inStack裡的資料倒到outStack，將程式碼貼給gemini後，發現會產生資料錯誤，因為若是指令是[push(1),push(2),pop(),push(3),pop()]，資料順序就不符合FIFO了。確認題目下方的提示後，在class MyQueue裡自創一個函式void outStack_isEmpty()，在pop()與peek()被呼叫時，檢測outStack是否為空，若是，則呼叫自創函式void outStack_isEmpty()來將inStack裡的資料倒到outStack。

