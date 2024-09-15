#include "mystring_B.h"
#include <string.h>
#include <iostream>
using namespace std;

void DictionaryList::find(const Key &keyA)
{
  if (headM == 0)
  {
    cursorM = 0;
    return;
  }

  else if (headM->keyM == keyA)
  {
    cursorM = headM;
    return;
  }

  else
  {
    Node *prev = headM;
    Node *next = headM->nextM;

    while (next != 0 && keyA >= prev->keyM)
    {

      if (prev->keyM == keyA)
      {
        cursorM = prev;
        return;
      }

      prev = next;
      next = prev->nextM;
    }

    if (prev->keyM == keyA)
    {
      cursorM = prev;
      return;
    }
  }

  cursorM = 0;
  return;
}

void DictionaryList::destroy()
{
  if (headM == 0)
  {
    return;
  }

  cursorM = 0;
  sizeM = 0;

  Node *prev = headM;
  Node *next = prev->nextM;

  do
  {

    delete prev;

    prev = next;
    next = prev->nextM;
  } while (next != 0);

  delete prev;
  headM = 0;
}

void DictionaryList::copy(const DictionaryList &source)
{

  if (source.headM == 0)
  {
    this->headM = 0;
    this->cursorM = 0;
    this->sizeM = 0;
    return;
  }

  this->cursorM = 0;
  this->sizeM = 0;
  Node *prev = source.headM;
  Node *next = prev->nextM;

  Node *copy = new Node(prev->keyM, prev->datumM, 0);
  Node *head = copy;
  this->sizeM++;

  while (next != 0)
  {

    copy->nextM = new Node(next->keyM, next->datumM, 0);

    if (source.cursorM == prev)
    {
      this->cursorM = copy;
    }

    copy = copy->nextM;
    this->sizeM++;

    prev = next;
    next = prev->nextM;
  }

  copy->nextM = next;
  this->headM = head;
}
