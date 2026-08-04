class MedianFinder {
public:
    priority_queue<int> pqMax; // MaxHeap
    priority_queue<int, vector<int>, greater<int>> pqMin; //MinHeap
    MedianFinder() { }
    
    void addNum(int num) {
        pqMax.push(num);
        if(!pqMin.empty() && pqMax.top() > pqMin.top()){
            pqMin.push(pqMax.top());
            pqMax.pop();
        }
        if(pqMax.size() > pqMin.size()+1){
            pqMin.push(pqMax.top());
            pqMax.pop();
        }
        if(pqMin.size() > pqMax.size()){
            pqMax.push(pqMin.top());
            pqMin.pop();
        }
    }
    
    double findMedian() {
        if(pqMin.size() == pqMax.size()) return (pqMin.top() + pqMax.top())/2.0;
        else if(pqMin.size() > pqMax.size()) return pqMin.top();
        else return pqMax.top();
    }
};
