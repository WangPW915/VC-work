
// 330_Test1View.h : CMy330_Test1View 类的接口
//

#pragma once


class CMy330_Test1View : public CView
{
protected: // 仅从序列化创建
	CMy330_Test1View();
	DECLARE_DYNCREATE(CMy330_Test1View)

// 特性
public:
	CMy330_Test1Doc* GetDocument() const;

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
	virtual ~CMy330_Test1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnFileopen();
};

#ifndef _DEBUG  // 330_Test1View.cpp 中的调试版本
inline CMy330_Test1Doc* CMy330_Test1View::GetDocument() const
   { return reinterpret_cast<CMy330_Test1Doc*>(m_pDocument); }
#endif

