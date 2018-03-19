class Solution {
public:
    int find(vector<int>& nums1, vector<int>& nums2, int st1, int ed1, int st2, int ed2, int n) {
        int l1 = ed1-st1+1;
        int l2 = ed2-st2+1;
        int m1=(st1+ed1)/2;
        int m2=(st2+ed2)/2;
        int big= l1+l2-n+1;
        
        if(l1==0)
            return st2+n-1+nums1.size();
        if(l2==0)
            return st1+n-1;
        
        if(n==1)
            return (nums1[st1]<nums2[st2])?st1:st2+nums1.size();
        
        if(l1==1 && l2==1){
            return (nums1[st1]>nums2[st2])?st1:st2+nums1.size();
        }
        
        if(l1==1)
            return (nums2[st2+n-1]<=nums1[st1])?(st2+n-1+nums1.size()):
                (  (nums2[st2+n-2]<=nums1[st1])?st1:( st2+n-2+nums1.size() )
                );
        if(l2==1)
            return (nums1[st1+n-1]<=nums2[st2])?(st1+n-1):
                (  (nums1[st1+n-2]<=nums2[st2])?(st2+nums1.size()):( st1+n-2 )
                );
        
        int small1=m1-st1, small2=m2-st2;
        int large1=ed1-m1, large2=ed2-m2;
        
        
        if(n<=small1){
            return find(nums1,nums2,st1,m1-1,st2,ed2,n);
        }
        if(n<=small2){
            return find(nums1,nums2,st1,ed1,st2,m2-1,n);
        }
        
        if( big<=large1 ){
            return find(nums1,nums2,m1+1,ed1,st2,ed2,n-small1-1);
        }
        if( big<=large2 ){
            return find(nums1,nums2,st1,ed1,m2+1,ed2,n-small2-1);
        }
        
        
        if( n<=(l1+l2)/2 ){
            if(nums1[m1]>nums2[m2]){
                return find(nums1,nums2,st1,m1,st2,ed2,n);
            } else {
                return find(nums1,nums2,st1,ed1,st2,m2,n);
            }
        } else {
            if(nums1[m1]>nums2[m2]){
                return find(nums1,nums2,st1,ed1,m2+1,ed2,n-small2-1);
            } else {
                return find(nums1,nums2,m1+1,ed1,st2,ed2,n-small1-1);
            }
        }    
    }
    
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s1=nums1.size();
        int s2=nums2.size();
        
        if((s1+s2)%2==1){
            int res=find(nums1,nums2,0,s1-1,0,s2-1,(s1+s2)/2+1);
            if(res<s1)
                return nums1[res];
            else
                return nums2[res-s1];
        } else {
            int res1=find(nums1,nums2,0,s1-1,0,s2-1,(s1+s2)/2);
            int res2=find(nums1,nums2,0,s1-1,0,s2-1,(s1+s2)/2+1);
            double aa,bb;
            if(res1<s1)
                aa= nums1[res1];
            else 
                aa= nums2[res1-s1];
            
            if(res2<s1)
                bb= nums1[res2];
            else 
                bb= nums2[res2-s1];
            return (aa+bb)/2;
        }
    }
};