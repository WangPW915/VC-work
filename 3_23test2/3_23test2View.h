
// 3_23test2View.h : CMy3_23test2View 类的接口
//

#pragma once


class CMy3_23test2View : public CView
{
protected: // 仅从序列化创建
	CMy3_23test2View();
	DECLARE_DYNCREATE(CMy3_23test2View)

// 特性
public:
	CMy3_23test2Doc* GetDocument() const;

// 操作
public:
	CRect rect;
	int x, y;
	int red, green, blue, color;

// 重写
public:
	virtual void OnDraw(CDC* pDC);  // 重写以绘制该视图
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// 实现
public:
	virtual ~CMy3_23test2View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnColorcirclechange();
};

#ifndef _DEBUG  // 3_23test2View.cpp 中的调试版本
inline CMy3_23test2Doc* CMy3_23test2View::GetDocument() const
   { return reinterpret_cast<CMy3_23test2Doc*>(m_pDocument); }
#endif

