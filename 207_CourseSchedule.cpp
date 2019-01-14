class Solution {
public:
    class node_type{
    public:
        int name;
        vector<int> next;       
        bool pass = false;
        
        node_type(int name_st)
        {
            name = name_st;
        }
        node_type()
        {
            
        }
    };
    
    map<int , node_type> node_list; 
    bool Is_circle = false;
    
    void check_circle(int now , int start)
    {
        if(Is_circle == true) { return ; }
        node_list[now].pass = true;
        for(int i = 0 ; i < node_list[now].next.size() ; i++)
        {
            if(node_list[now].next[i] == start)
            {
                Is_circle = true;
                return;
            }
            if(node_list[node_list[now].next[i]].pass == true)
            {
                continue;
            }
            else
            {
                check_circle(node_list[now].next[i] , start);
            }
        }
    }
    
    bool canFinish(int numCourses, vector<pair<int, int>>& prerequisites) {
        for(int i = 0 ; i < prerequisites.size() ; i++)
        {
            if(node_list.find(prerequisites[i].first) == node_list.end())
            {
                node_type temp(prerequisites[i].first);
                node_list[prerequisites[i].first] = temp;
            }
            if(node_list.find(prerequisites[i].second) == node_list.end())
            {
                node_type temp(prerequisites[i].second);
                node_list[prerequisites[i].second] = temp;
            }
            node_list[prerequisites[i].first].next.push_back(prerequisites[i].second);
        }
        for(map<int , node_type>::iterator it = node_list.begin() ; it != node_list.end() ; it++)
        {
            Is_circle = false;
            for(map<int , node_type>::iterator it = node_list.begin() ; it != node_list.end() ; it++)
            {
                it->second.pass = false;
            }
            check_circle(it->first , it->first);
            if(Is_circle == true) { return false; }
        }        
        return true;
    }
};
