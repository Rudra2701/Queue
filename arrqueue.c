void insert(queue q, int val) {
    if (isFull(q)) return;
    if (isEmpty(q)) front++;
    q.rear++;
    q.queue[rear]=val
}
int delete(queue q) {
    int del;
    if (isEmpty(q)) return -9999;
    del=q.queue[q.front];
    q.front++;
    if (isEmpty) q.front=q.rear=1;
}
int isFull(queue q) {
    if (q.rear==q.max-1) return 1;
    return 0;
}
int isEmpty(queue q) {
    if (front == -1 || front>rear) return 1;
    return 0;
} 
/*Copyright (C) 2026  Rudra Sahil Shivhare

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/