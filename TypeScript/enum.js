var AgeList;
(function (AgeList) {
    AgeList[AgeList["MyAge"] = 18] = "MyAge";
    AgeList[AgeList["DadAge"] = 40] = "DadAge";
    AgeList[AgeList["MomAge"] = 38] = "MomAge";
})(AgeList || (AgeList = {}));
var myAge = AgeList.MyAge; // 18
var ColorList;
(function (ColorList) {
    ColorList[ColorList["Red"] = 0] = "Red";
    ColorList[ColorList["Green"] = 1] = "Green";
    ColorList[ColorList["Blue"] = 2] = "Blue";
})(ColorList || (ColorList = {}));
var myColor = ColorList[1]; // 'Green'