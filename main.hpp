// main h file, we shall delcare what is going to be needed fr the rest of the file




class MmgOb{


public:
double MmgVector2 pos;
 int w;
 int h;
 bool isVisible;
// MmgColor color;
 String GetVersion() { }
 bool GetIsVisible() {  }
 void SetIsVisible(bool bl) { }
 int GetWidth() {  }
 void SetWidth(int W) {  }

 int GetHeight() {  }
 void SetHeight(int H) { }
 void SetPosition(MmgVector2 v) { }
  MmgVector2 GetPosition() { }
 MmgColor GetMmgColor() {  }
void SetMmgColor(MmgColor c) {  }
void MmgObj;
 MmgObj(MmgVector2 v2, int W, int H, bool isv, MmgColor c, 
String n, String i) { ... }
 MmgObj(MmgObj obj) { ... }
 MmgObj Clone() { ... }
 MmgObj CloneTyped() { ... }
 void MmgDraw(MmgPen p) { ... }
 bool MmgUpdate(int updateTick, long currentTimeMs, long 
msSinceLastFrame) { ... }
 String ApiToString() { ... }
 bool ApiEquals(MmgObj obj) { ... 
}

};

class main {

public:
void MmgObj;
 MmgObj(MmgVector2 v2, int W, int H, bool isv, MmgColor c, 
String n, String i) { ... }
 MmgObj(MmgObj obj) { ... }
 MmgObj Clone() { ... }
 MmgObj CloneTyped() { ... }
 void MmgDraw(MmgPen p) { ... }
 bool MmgUpdate(int updateTick, long currentTimeMs, long 
msSinceLastFrame) { ... }
 String ApiToString() { ... }
 bool ApiEquals(MmgObj obj) { ... 
}
}