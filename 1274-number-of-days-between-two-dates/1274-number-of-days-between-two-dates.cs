public class Solution {
    public int DaysBetweenDates(string date1, string date2) {
        DateTime d1= new DateTime(con(date1.Substring(0,4)),con(date1.Substring(5,2)),con(date1.Substring(8,2)));
        DateTime d2= new DateTime(con(date2.Substring(0,4)),con(date2.Substring(5,2)),con(date2.Substring(8,2)));

        int con(string s)=> Int32.Parse(s);
        return Math.Abs(d1.Subtract(d2).Days);
    }
}