
// 3_24Text1View.h : CMy3_24Text1View 类的接口
//

#pragma once


class CMy3_24Text1View : public CView
{
protected: // 仅从序列化创建
	CMy3_24Text1View();
	DECLARE_DYNCREATE(CMy3_24Text1View)

// 特性
public:
	CMy3_24Text1Doc* GetDocument() const;

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
	virtual ~CMy3_24Text1View();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// 生成的消息映射函数
protected:
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowname();
};

#ifndef _DEBUG  // 3_24Text1View.cpp 中的调试版本
inline CMy3_24Text1Doc* CMy3_24Text1View::GetDocument() const
   { return reinterpret_cast<CMy3_24Text1Doc*>(m_pDocument); }
#endif

