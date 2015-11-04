#include<iostream>
#include<vector>
#include<string>
#include<sstream>
using namespace std;
struct TreeNode

{
	int val;
	TreeNode *left;
	TreeNode *right;
	/* data */
	TreeNode(int x):val(x),left(NULL),right(NULL){}
};
class Solution
{
public:
	//Solution(arguments);
	//~Solution();
	std::vector<string> binaryTreePaths(TreeNode *root){
		string path ="";
		std::vector<string> ans;
		dfs(root,ans,path);
		return ans;
	}
	void dfs(TreeNode *root ,vector<string> &ans,string path)
	{
		if (root==NULL)
		{
			return;/* code */
		}
		path +=to_string(root->val);
		if (root->left==NULL &&root->right==NULL)
		{
			
			ans.push_back(path);
			return;/* code */
		}
		path +="->";
		dfs(root->left,ans,path);
		dfs(root->right,ans,path);



	}
};
	 int main(int argc, char const *argv[])
	{
		/* code */
				TreeNode *t=new TreeNode(1);
				t->left= new TreeNode(2);
				t->right= new TreeNode(3);
				t->left->left= NULL;
				t->left->right=new TreeNode(5);
				Solution s;
				std::vector<string> path=s.binaryTreePaths(t);
				for (int i = 0; i < path.size(); ++i)
				{
					cout<<path[i]<<endl;/* code */
				}

		return 0;
	}


	/* data */

