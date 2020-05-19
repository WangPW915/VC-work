
// 413_test4View.h : CMy413_test4View 类的接口
//

#pragma once


class CMy413_test4View : public CView
{
protected: // 仅从序列化创建
	CMy413_test4View();
	DECLARE_DYNCREATE(CMy413_test4View)

// 特性
public:
	CMy413_test4Doc* GetDocument() const;

// 操作
public:

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
	virtual ~CMy413_test4View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnPopout();
};

#ifndef _DEBUG  // 413_test4View.cpp 中的调试版本
inline CMy413_test4Doc* CMy413_test4View::GetDocument() const
   { return reinterpret_cast<CMy413_test4Doc*>(m_pDocument); }
#endif

