class Solution {
    // dynamic programming.
        public boolean wordBreak(String s, List<String> wordDict) {
            // first delete the words that isn't a substring of the s;
            ArrayList<String> words = new ArrayList<>();
            for(String w : wordDict){
                if(s.contains(w))
                    words.add(w);
            }

            int size = s.length();
            boolean[] success = new boolean[size+1];
            success[0] = true;
            for(int i = 0; i < size; i++){
                StringBuilder sb = new StringBuilder(s.substring(0, i + 1));
                for(int j = 0; j <= i; j++){
                    if(success[j] && words.contains(sb.toString())){
                        success[i+1] = true;
                        break;
                    }
                    sb.deleteCharAt(0);
                }
            }
            return success[size];
        }
    }
