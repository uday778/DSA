// #include<iostream>
// using namespace std;

    
// int main()
// {
//      //pairs
//    void explainpair(){
//         // syntax
//         pair<int,int>p={1,3};
//         //it stores two variables
//         cout<<p.first<<" "<<p.second;

//         // its posible to store more than 2 variables by pairs chainin
//         pair<int,pair<int,int>>p={1,{3,4}};
//         cout<<p.first<<"  "<<p.second.first<<"   "<<p.second.second;

//         // in case arrays 
//         pair<int,int>arr[]={{1,2},{2,5},{5,1}};
//         cout<<arr[1].second;
//     };


//     //vectors
//     void explainVectors(){
//         //syntax
//         //where v  is a name of vector
//         vector<int>v;

//         //accessing like arrays v[0] and v[1] v[2] etc..

//         //add 1 at last index
//         v.push_back(1);

//         //similar to push_back but faster than it 
//         v.emplace_back(2);

//         //pair vector
//         vector<pair<int,int>>v
//         v.push_backk({1,2});//push to last in pairs
//         v.emplace_back(1,2); //no need to curly brackets


//         vector<int>v(5,100);// declared like {100,100,100,100,100}

//         vector<int>v(5);//it declared as {0,0,0,0,0} or garbage value in it

//         // vector <int> v1(5,20);
//         //vectoe <int> v2(v1);




//         //iteraters 🌐

//         vector<int>::iterator it =v.begin();
//         it++;
//         cout<<*(it)<<" ";
//         it=it+2;
//         cout<*(it)<<" ";

//         //another types of iterators
//         //end() iterater does not point last element 
//         //ex: {10,20,30,40,50}* it points in star position
//         vector<int>::iterator it=v.end();

//         //v.reverseend() ponts in *{10,20,30,40,50} start position it reverse to the end()
//         vector<int>::iterator it=v.rend();

//         //v.reverse begin() it point towrads last index {10,20,30,40,50} it point 50 when we do it++ it moves backwards 40->30->20->10 so on ...
//         vector<int>::iterator it=v.rbegin();


//         //priting vector
//         //simple way using loop

//         for(vector<int>::iterator it=v.begin();it !=v.end();it++){
//             cout<<*(it)<<" ";
//         }

//         for(auto it=v.begin(); it !=v.end(); it++){
//             cout<<it<<" ";
//         }
//         //foreach loop
//         for(auto it:v){
//             cout<<it<<" ";
//         }



//         // {10,20,30,40,,50}
//         v.erase(v.begin()+1);//it erases 20 from the vector

//         //{10,20,30,40,50}
//         v.erase(v.begin()+1,v.begin()+4);//it delete vector from 20,30,40 //here end is not included 50  doesnot erase

//         ///inset function 🚀
//         vector<int>v(2,100);///{100,,100}
//         v.insert(v.begin(),300); // {300,100,100}
//         v.insert(v.begin()+1,2,10)//{300,10,10,100,100}


//         vector<int>copy(2,50); //{50,50}
//         v.insert(v.begin(),copy.begin(),copy.end());//{50,50,300,10,10,100,100}

//         v.size();//size of vector
//         v.pop_back();//remove the last eleemnt from vector

//         //v1-> {10,20}
//         // v2->{30,40}
//         v1.swap(v2);//v1-> {30,40}  //v2->{10,20}

//         v,clear();//erase the entire vector

//         cout<<v.empty(); /// it give true or false if vector have elemenmts it give false so on ...
//     }


//    void  explainList(){
//     list<int>ls;

//     ls.push_back(2);/// {2}
//     ls.emplace_back(4);///{2,4}

//     ls.push_front(5);// {5,2,4}
//     ls.emplace_front(); //{2,4}
//     //rest functions same as vector
//     //begin,end,rbegin,rend , clear ,  insert , size  ,swap
//    }
// //deque container
//    void explainDeque(){
//     deque<int>dq;;
//     dq.push_back(1); //{1}
//     dq.emplace_back(2); //{1,2}
//     dq.push_front(4); // {4,1,2}
//     dq.emplace_front(3); //3,4,1,2

//     dq.pop_back();//{3,4,1}
//     dq.pop_back(); //{4,1}

//     dq.back(); 
//     dq.front()
//     //rest functions same as vector
//     // begin , end , rbegin , rend , clear , insert ,  size , swap
//    }

// //stack STL
//    void explainStack(){
//     stack<int>st;
//     st.push(1);//{1}
//     st.push(2);//{2,1}
//     st.push(3);//{3,2,1}
//     st.push(4);//{4,3,2,1}
//     st.push(5);//{5,4,3,2,1}
//     st.push(6);//{6,5,4,3,2,1}

//     cout<<st.top(); //prints 6

//     st.pop();//remove 6 from st
//     cout<<st.top();// prints 5
//     cout<<st.size(); // prints 5
//     cout<<st.empty(); // gives  false
//     stack<int>st1,st2;
//     st1.swap(st2);
//    }

//    //queue data structure 

//    void ExplainQueue(){
//     queue<int>q;
//     q.push(1);//{1}
//     q.push(2);///{1,2}
//     q.emplace(4); //{1,2,4}

//     q.back()+=5; //{1,2,9} //it takes last element add 5 to it

//     cout<<q.back(); //prints 9
//     cout<<q.front(); //print 1
//     q.pop();// {2,9} //it delete the first element

//     cout<<q.front(); //prints 2
//    }


//    //priority queue
// void explainPQ(){
//     //syntax
//     priority_queue<int>pq;


//     pq.push(2) ; // {2}
//     pq.push(3); //{2,3}
//     pq.push(4); //{2,3,4}
//     pq.emplace(10) ; //{10,4,3,2}


//     cout<<pq.top();//prints 10

//     pq.pop(); // {4,3,2}
//     cout<<pq.top(); //prints 4
    

//     // size swap empty function same as others
//     //minimum Heap

//     priority_queue<int,,vector<int>,greater<int>>pq;
//     pq.push(5); //{5}
//     pq.push(2); //{2,5}
//     pq.push(8); //
// }


//     return 0;
// }

